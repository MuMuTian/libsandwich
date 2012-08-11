/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSArray, NSURL, NSString, SAPersonAttribute, NSDate, NSNumber;

@interface SAEmailEmail : SADomainObject {
}
@property(copy, nonatomic) NSString* type;
@property(copy, nonatomic) NSString* timeZoneId;
@property(copy, nonatomic) NSString* subject;
@property(copy, nonatomic) NSURL* referenceId;
@property(copy, nonatomic) NSArray* recipientsTo;
@property(copy, nonatomic) NSArray* recipientsCc;
@property(copy, nonatomic) NSArray* recipientsBcc;
@property(copy, nonatomic) NSArray* receivingAddresses;
@property(retain, nonatomic) NSNumber* outgoing;
@property(copy, nonatomic) NSString* message;
@property(retain, nonatomic) SAPersonAttribute* fromEmail;
@property(copy, nonatomic) NSDate* dateSent;
+ (id)email;
+ (id)emailWithDictionary:(id)dictionary context:(id)context;
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

