/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSURL, NSString;

@interface SAAlarmCreateCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* aceId;
@property(copy, nonatomic) NSString* refId;
@property(copy, nonatomic) NSURL* alarmId;
+ (id)createCompleted;
+ (id)createCompletedWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

