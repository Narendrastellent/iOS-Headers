//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XPCProxyTarget.h"

@class BBServerConnection;

@interface BBServerConduit : NSObject <XPCProxyTarget>
{
    BBServerConnection *_connection;
}

+ (id)sharedConduit;
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(CDUnknownBlockType)arg2;
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(BOOL)arg2;
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)invalidate;
- (id)init;

@end

