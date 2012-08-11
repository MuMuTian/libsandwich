/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderTrigger.h"

@class SAReminderDateTimeTrigger, SAReminderLocationTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger {
}
@property(retain, nonatomic) SAReminderLocationTrigger* locationTrigger;
@property(retain, nonatomic) SAReminderDateTimeTrigger* dateTimeTrigger;
+ (id)compositeTrigger;
+ (id)compositeTriggerWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

