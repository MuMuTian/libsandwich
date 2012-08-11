/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, SACalendarSource;

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* aceId;
@property(copy, nonatomic) NSString* refId;
@property(retain, nonatomic) SACalendarSource* aceCalendarSource;
+ (id)defaultSourceGetCompleted;
+ (id)defaultSourceGetCompletedWithDictionary:(id)dictionary context:(id)context;
+ (id)defaultSourceGetCompletedWithAceCalendarSource:(id)aceCalendarSource;
- (id)initWithAceCalendarSource:(id)aceCalendarSource;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

