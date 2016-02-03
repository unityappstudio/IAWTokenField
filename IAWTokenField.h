//
//  IAWTokenField.h
//  IAWTokenField
//
//  Created by ThuyenBV on 2/3/16.
//  Copyright (c) 2015 ThuyenBV. All rights reserved.
//


#import <UIKit/UIKit.h>

@class IAWTokenField;

@interface IAWTokenTextField : UITextField
@end

@protocol IAWTokenFieldDataSource <NSObject>
@required
- (CGFloat)lineHeightForTokenInField:(IAWTokenField*)tokenField;
- (NSUInteger)numberOfTokenInField:(IAWTokenField*)tokenField;
- (UIView*)tokenField:(IAWTokenField*)tokenField viewForTokenAtIndex:(NSUInteger)index;
@end

@protocol IAWTokenFieldDelegate <NSObject>
@optional
- (CGFloat)tokenMarginInTokenInField:(IAWTokenField*)tokenField;
- (void)tokenField:(IAWTokenField*)tokenField didRemoveTokenAtIndex:(NSUInteger)index;
- (void)tokenField:(IAWTokenField*)tokenField didReturnWithText:(NSString*)text;
- (void)tokenField:(IAWTokenField*)tokenField didTextChanged:(NSString*)text;
- (void)tokenField:(IAWTokenField*)tokenField didResizeHeight:(CGFloat)height;
- (void)tokenFieldDidBeginEditing:(IAWTokenField*)tokenField;
- (BOOL)tokenFieldShouldEndEditing:(IAWTokenField*)textField;
- (void)tokenFieldDidEndEditing:(IAWTokenField*)tokenField;
@end

@interface IAWTokenField : UIControl

@property (nonatomic, weak) IBOutlet id<IAWTokenFieldDataSource> dataSource;
@property (nonatomic, weak) IBOutlet id<IAWTokenFieldDelegate> delegate;

@property (nonatomic, assign) NSInteger maxLine;
@property (nonatomic, strong) NSString *prefixText;

@property (nonatomic, strong, readonly) IAWTokenTextField* textField;

- (void)      reloadData;
- (NSUInteger)numberOfToken;
- (NSUInteger)indexOfTokenView:(UIView*)view;

@end