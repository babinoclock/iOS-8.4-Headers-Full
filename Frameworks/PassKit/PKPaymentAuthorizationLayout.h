/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITraitEnvironment.h>

@class UITraitCollection, UIViewController, NSString;

@interface PKPaymentAuthorizationLayout : NSObject <UITraitEnvironment> {

	float _contentHeightPadding;
	float _headerMargin;
	float _contentMargin;
	float _valueLeftMargin;
	UIViewController* _controller;

}

@property (nonatomic,readonly) float contentHeightPadding;                       //@synthesize contentHeightPadding=_contentHeightPadding - In the implementation block
@property (nonatomic,readonly) float headerMargin;                               //@synthesize headerMargin=_headerMargin - In the implementation block
@property (nonatomic,readonly) float contentMargin;                              //@synthesize contentMargin=_contentMargin - In the implementation block
@property (nonatomic,readonly) float valueLeftMargin;                            //@synthesize valueLeftMargin=_valueLeftMargin - In the implementation block
@property (assign,nonatomic) UIViewController * controller;                      //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
-(float)valueLeftMargin;
-(float)contentMargin;
-(id)initWithController:(id)arg1 ;
-(float)contentHeightPadding;
-(UITraitCollection *)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
-(float)headerMargin;
@end

