/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, NSString;

@interface SAReminderListSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString* name;
@property(copy, nonatomic) NSURL* targetAppId;
+ (id)listSearch;
+ (id)listSearchWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (id)groupIdentifier;
@end

