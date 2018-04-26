//
//  Common.m
//  AppBox
//
//  Created by Vineet Choudhary on 06/09/16.
//  Copyright © 2016 Developer Insider. All rights reserved.
//

#import "Common.h"

@implementation Common

+ (NSString*)generateUUID {
    NSMutableData *data = [NSMutableData dataWithLength:32];
    int result = SecRandomCopyBytes(NULL, 32, data.mutableBytes);
    NSAssert(result == 0, @"Error generating random bytes: %d", errno);
    NSString *base64EncodedData = [data base64EncodedStringWithOptions:0];
    base64EncodedData = [base64EncodedData stringByReplacingOccurrencesOfString:@"/" withString:abEmptyString];
    return base64EncodedData;
}
    
+ (NSURL *)getFileDirectoryForFilePath:(NSURL *)filePath{
    NSArray *pathComponents = [filePath.relativePath pathComponents];
    NSString *fileDirectory = [NSString pathWithComponents:[pathComponents subarrayWithRange:NSMakeRange(0, pathComponents.count - 1)]];
    fileDirectory = [fileDirectory stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    return [NSURL URLWithString:fileDirectory];
}

+(NSError *)errorWithDesc:(NSString *)error andCode:(NSInteger)code{
    NSMutableDictionary *errorInfo = [[NSMutableDictionary alloc] init];
    [errorInfo setValue:error forKey:NSLocalizedDescriptionKey];
    return [NSError errorWithDomain:NSCocoaErrorDomain code:code userInfo:errorInfo];
}

#pragma mark - Notifications
+ (NSModalResponse)showAlertWithTitle:(NSString *)title andMessage:(NSString *)message{
    [[AppDelegate appDelegate] addSessionLog:[NSString stringWithFormat:@"ALERT -\nTitle - %@ Message - %@", title, message]];
    NSAlert *alert = [[NSAlert alloc] init];
    [alert setMessageText: title == nil ? @"Error" : title];
    [alert setInformativeText:message == nil ? @"" : message];
    [alert setAlertStyle:NSWarningAlertStyle];
    return [alert runModal];
}

+ (void)showNoInternetConnectionAvailabeAlert{
    [Common showAlertWithTitle:@"Error" andMessage:@"There is no Internet connection."];
}

+ (void)showLocalNotificationWithTitle:(NSString *)title andMessage:(NSString *)message{
    NSUserNotification *notification = [[NSUserNotification alloc] init];
    [notification setTitle:title == nil ? @"Error" : title];
    [notification setInformativeText:message == nil ? @"" : message];
    [notification setDeliveryDate:[NSDate dateWithTimeInterval:1 sinceDate:[NSDate date]]];
    [notification setSoundName:NSUserNotificationDefaultSoundName];
    NSUserNotificationCenter *center = [NSUserNotificationCenter defaultUserNotificationCenter];
    [center scheduleNotification:notification];
}


@end
