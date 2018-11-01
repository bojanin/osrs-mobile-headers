//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFImageCache-Protocol.h"

@class NSString, NSURLRequest, UIImage;

@protocol AFImageRequestCache <AFImageCache>
- (UIImage *)imageforRequest:(NSURLRequest *)arg1 withAdditionalIdentifier:(NSString *)arg2;
- (_Bool)removeImageforRequest:(NSURLRequest *)arg1 withAdditionalIdentifier:(NSString *)arg2;
- (void)addImage:(UIImage *)arg1 forRequest:(NSURLRequest *)arg2 withAdditionalIdentifier:(NSString *)arg3;
- (_Bool)shouldCacheImage:(UIImage *)arg1 forRequest:(NSURLRequest *)arg2 withAdditionalIdentifier:(NSString *)arg3;
@end

