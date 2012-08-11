/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASStartSpeech.h"

@class NSString;

@interface SASStartSpeechDictation : SASStartSpeech {
}
@property(copy, nonatomic) NSString* selectedText;
@property(copy, nonatomic) NSString* region;
@property(copy, nonatomic) NSString* prefixText;
@property(copy, nonatomic) NSString* postfixText;
@property(copy, nonatomic) NSString* language;
@property(copy, nonatomic) NSString* keyboardType;
@property(copy, nonatomic) NSString* keyboardReturnKey;
@property(copy, nonatomic) NSString* interactionId;
@property(copy, nonatomic) NSString* fieldLabel;
@property(copy, nonatomic) NSString* fieldId;
@property(assign, nonatomic) BOOL censorSpeech;
@property(copy, nonatomic) NSString* applicationVersion;
@property(copy, nonatomic) NSString* applicationName;
+ (id)startSpeechDictation;
+ (id)startSpeechDictationWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

