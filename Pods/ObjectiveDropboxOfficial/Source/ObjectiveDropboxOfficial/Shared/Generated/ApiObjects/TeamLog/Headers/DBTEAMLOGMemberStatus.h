///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGMemberStatus;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MemberStatus` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGMemberStatus : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGMemberStatusTag` enum type represents the possible tag states
/// with which the `DBTEAMLOGMemberStatus` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGMemberStatusTag){
    /// (no description).
    DBTEAMLOGMemberStatusNotJoined,

    /// (no description).
    DBTEAMLOGMemberStatusInvited,

    /// (no description).
    DBTEAMLOGMemberStatusActive,

    /// (no description).
    DBTEAMLOGMemberStatusSuspended,

    /// (no description).
    DBTEAMLOGMemberStatusRemoved,

    /// (no description).
    DBTEAMLOGMemberStatusMovedToAnotherTeam,

    /// (no description).
    DBTEAMLOGMemberStatusOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGMemberStatusTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "not_joined".
///
/// @return An initialized instance.
///
- (instancetype)initWithNotJoined;

///
/// Initializes union class with tag state of "invited".
///
/// @return An initialized instance.
///
- (instancetype)initWithInvited;

///
/// Initializes union class with tag state of "active".
///
/// @return An initialized instance.
///
- (instancetype)initWithActive;

///
/// Initializes union class with tag state of "suspended".
///
/// @return An initialized instance.
///
- (instancetype)initWithSuspended;

///
/// Initializes union class with tag state of "removed".
///
/// @return An initialized instance.
///
- (instancetype)initWithRemoved;

///
/// Initializes union class with tag state of "moved_to_another_team".
///
/// @return An initialized instance.
///
- (instancetype)initWithMovedToAnotherTeam;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "not_joined".
///
/// @return Whether the union's current tag state has value "not_joined".
///
- (BOOL)isNotJoined;

///
/// Retrieves whether the union's current tag state has value "invited".
///
/// @return Whether the union's current tag state has value "invited".
///
- (BOOL)isInvited;

///
/// Retrieves whether the union's current tag state has value "active".
///
/// @return Whether the union's current tag state has value "active".
///
- (BOOL)isActive;

///
/// Retrieves whether the union's current tag state has value "suspended".
///
/// @return Whether the union's current tag state has value "suspended".
///
- (BOOL)isSuspended;

///
/// Retrieves whether the union's current tag state has value "removed".
///
/// @return Whether the union's current tag state has value "removed".
///
- (BOOL)isRemoved;

///
/// Retrieves whether the union's current tag state has value
/// "moved_to_another_team".
///
/// @return Whether the union's current tag state has value
/// "moved_to_another_team".
///
- (BOOL)isMovedToAnotherTeam;

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
/// The serialization class for the `DBTEAMLOGMemberStatus` union.
///
@interface DBTEAMLOGMemberStatusSerializer : NSObject

///
/// Serializes `DBTEAMLOGMemberStatus` instances.
///
/// @param instance An instance of the `DBTEAMLOGMemberStatus` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGMemberStatus` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGMemberStatus *)instance;

///
/// Deserializes `DBTEAMLOGMemberStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGMemberStatus` API object.
///
/// @return An instantiation of the `DBTEAMLOGMemberStatus` object.
///
+ (DBTEAMLOGMemberStatus *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
