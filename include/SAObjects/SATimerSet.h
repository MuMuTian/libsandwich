/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, SATimerObject;

@interface SATimerSet : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SATimerObject* timer;
@property(copy, nonatomic) NSURL* targetAppId;
+ (id)setWithDictionary:(id)dictionary context:(id)context;
+ (id)set;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (id)groupIdentifier;
@end

