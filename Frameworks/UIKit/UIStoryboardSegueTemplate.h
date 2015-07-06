/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/NSCoding.h>

@class NSString, UIViewController;

@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {

	NSString* _identifier;
	NSString* _segueClassName;
	UIViewController* _viewController;
	NSString* _destinationViewControllerIdentifier;
	char _performOnViewLoad;

}

@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) char performOnViewLoad;                         //@synthesize performOnViewLoad=_performOnViewLoad - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)perform:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(char)performOnViewLoad;
-(void)_perform:(id)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(id)defaultSegueClassName;
-(Class)effectiveSegueClass;
-(void)setPerformOnViewLoad:(char)arg1 ;
@end

