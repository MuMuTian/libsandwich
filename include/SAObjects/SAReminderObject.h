/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSArray, SAReminderTrigger, NSString, NSDate, SAReminderRecurrence;
@protocol SAReminderPayload;

@interface SAReminderObject : SADomainObject {
}
@property(retain, nonatomic) SAReminderTrigger* trigger;
@property(copy, nonatomic) NSString* subject;
@property(retain, nonatomic) SAReminderRecurrence* recurrence;
@property(retain, nonatomic) id<SAReminderPayload> payload;
@property(copy, nonatomic) NSArray* lists;
@property(assign, nonatomic) BOOL important;
@property(copy, nonatomic) NSString* dueDateTimeZoneId;
@property(copy, nonatomic) NSDate* dueDate;
@property(assign, nonatomic) BOOL completed;
@property(copy, nonatomic) NSString* alternateSubject;
+ (id)objectWithDictionary:(id)dictionary context:(id)context;
+ (id)object;
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

