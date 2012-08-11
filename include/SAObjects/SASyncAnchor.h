/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString;

@interface SASyncAnchor : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString* value;
@property(copy, nonatomic) NSString* validity;
@property(copy, nonatomic) NSString* key;
@property(copy, nonatomic) NSString* generation;
+ (id)anchorWithDictionary:(id)dictionary context:(id)context;
+ (id)anchor;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

