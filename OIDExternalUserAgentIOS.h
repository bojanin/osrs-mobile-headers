//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OIDExternalUserAgent-Protocol.h"
#import "SFSafariViewControllerDelegate-Protocol.h"

@class NSString, SFAuthenticationSession, SFSafariViewController, UIViewController;
@protocol OIDExternalUserAgentSession;

@interface OIDExternalUserAgentIOS : NSObject <SFSafariViewControllerDelegate, OIDExternalUserAgent>
{
    UIViewController *_presentingViewController;
    _Bool _externalUserAgentFlowInProgress;
    id <OIDExternalUserAgentSession> _session;
    SFSafariViewController *_safariVC;
    SFAuthenticationSession *_authenticationVC;
}

+ (void)setSafariViewControllerFactory:(id)arg1;
+ (id)safariViewControllerFactory;
- (void).cxx_destruct;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)cleanUp;
- (void)dismissExternalUserAgentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)presentExternalUserAgentRequest:(id)arg1 session:(id)arg2;
- (id)initWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

