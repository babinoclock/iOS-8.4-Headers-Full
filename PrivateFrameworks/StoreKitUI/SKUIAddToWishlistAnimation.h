/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, UINavigationButton;

@interface SKUIAddToWishlistAnimation : NSObject {

	/*^block*/id _completionBlock;
	UIImage* _image;
	UINavigationButton* _targetButton;

}
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(id)initWithImage:(id)arg1 buttonItem:(id)arg2 navigationBar:(id)arg3 ;
-(void)animateWithCompletionBlock:(/*^block*/id)arg1 ;
@end

