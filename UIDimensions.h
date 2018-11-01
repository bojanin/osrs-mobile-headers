//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIDimensions : NSObject
{
}

+ (float)productCellLegalTextFontSize;
+ (float)productCellMinimumFontSize;
+ (float)logoTopMargin;
+ (float)packageScrollTopMargin;
+ (float)productListExpandedTopSpace;
+ (float)moreProductsBottomMargin;
+ (float)moreProductsRightMargin;
+ (float)moreProductsLeftMargin;
+ (float)productListRightSpace;
+ (float)productListTopSpace;
+ (float)productWidth;
+ (float)productHeight;
+ (float)remainingItemsExpandDuration;
+ (float)selectedItemExpandDuration;
+ (float)packageSpacing;
+ (float)packageRightMargin;
+ (float)packageLeftMargin;
+ (float)packageHeight;
+ (float)packageExpandedWidth;
+ (float)packageCollapsedWidth;
+ (id)singleInstance;
- (void)fetchDimensionsFromDict:(id)arg1;
- (id)getDictionaryFromPlist:(id)arg1;
- (id)getPlistPathForWidth:(int)arg1;
- (void)fetchDefaultDimensions;
- (void)fetchDimensions:(int)arg1;
- (id)init;

@end
