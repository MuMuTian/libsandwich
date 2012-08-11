/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderPayload.h"
#import "AceObject.h"

@class NSString;

@interface SAReminderAssistantPayload : AceObject <SAReminderPayload> {
}
@property(copy, nonatomic) NSString* utterance;
+ (id)assistantPayload;
+ (id)assistantPayloadWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
@end
