//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface StoreViewPresenter : NSObject
{
    id delegate;
}

- (void).cxx_destruct;
- (void)sendTransactionToServer:(id)arg1 purchaseType:(id)arg2;
- (void)applyPendingTransactions:(unsigned char)arg1;
- (void)isPendingTransactions;
- (void)mergeProductsFromApple:(id)arg1 packages:(id)arg2 trialElegibility:(_Bool)arg3;
- (void)loadPackages;
- (void)checkConnectivityAndLoadPackages;
- (id)initWithDelegateAndConfiguration:(id)arg1 mobileAuthConfig:(id)arg2;

@end
