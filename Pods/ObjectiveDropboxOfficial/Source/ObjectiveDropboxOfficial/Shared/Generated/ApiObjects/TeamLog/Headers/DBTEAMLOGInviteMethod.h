///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGInviteMethod;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `InviteMethod` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGInviteMethod : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGInviteMethodTag` enum type represents the possible tag states
/// with which the `DBTEAMLOGInviteMethod` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGInviteMethodTag){
    /// (no description).
    DBTEAMLOGInviteMethodInviteLink,

    /// (no description).
    DBTEAMLOGInviteMethodAutoApprove,

    /// (no description).
    DBTEAMLOGInviteMethodMovedFromAnotherTeam,

    /// (no description).
    DBTEAMLOGInviteMethodOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGInviteMethodTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "invite_link".
///
/// @return An initialized instance.
///
- (instancetype)initWithInviteLink;

///
/// Initializes union class with tag state of "auto_approve".
///
/// @return An initialized instance.
///
- (instancetype)initWithAutoApprove;

///
/// Initializes union class with tag state of "moved_from_another_team".
///
/// @return An initialized instance.
///
- (instancetype)initWithMovedFromAnotherTeam;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "invite_link".
///
/// @return Whether the union's current tag state has value "invite_link".
///
- (BOOL)isInviteLink;

///
/// Retrieves whether the union's current tag state has value "auto_approve".
///
/// @return Whether the union's current tag state has value "auto_approve".
///
- (BOOL)isAutoApprove;

///
/// Retrieves whether the union's current tag state has value
/// "moved_from_another_team".
///
/// @return Whether the union's current tag state has value
/// "moved_from_another_team".
///
- (BOOL)isMovedFromAnotherTeam;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGInviteMethod` union.
///
@interface DBTEAMLOGInviteMethodSerializer : NSObject

///
/// Serializes `DBTEAMLOGInviteMethod` instances.
///
/// @param instance An instance of the `DBTEAMLOGInviteMethod` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGInviteMethod` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGInviteMethod *)instance;

///
/// Deserializes `DBTEAMLOGInviteMethod` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGInviteMethod` API object.
///
/// @return An instantiation of the `DBTEAMLOGInviteMethod` object.
///
+ (DBTEAMLOGInviteMethod *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
