/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSArray, NSString;

@interface SASyncChunk : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* aceId;
@property(copy, nonatomic) NSString* refId;
@property(copy, nonatomic) NSString* validity;
@property(copy, nonatomic) NSArray* toRemove;
@property(copy, nonatomic) NSArray* toAdd;
@property(copy, nonatomic) NSString* preGen;
@property(copy, nonatomic) NSString* postGen;
@property(copy, nonatomic) NSString* key;
+ (id)chunk;
+ (id)chunkWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

