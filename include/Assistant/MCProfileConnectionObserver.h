/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MCProfileConnectionObserver <NSObject>
@optional
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)profileConnection userInfo:(id)info;
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)profileConnection userInfo:(id)info;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)profileConnection userInfo:(id)info;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)profileConnection userInfo:(id)info;
@end

