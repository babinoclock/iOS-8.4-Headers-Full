/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISlideshowViewControllerDataSource.h>
#import <StoreKitUI/SKUISlideshowViewControllerDelegate.h>

@protocol SKUIViewElementSlideshowDelegate;
@class SKUIViewElementLayoutContext, NSMutableArray, SKUISlideshowViewController, SKUIIPhoneSlideshowViewController, NSString;

@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate> {

	id<SKUIViewElementSlideshowDelegate> _delegate;
	SKUIViewElementLayoutContext* _layoutContext;
	NSMutableArray* _lockups;
	SKUISlideshowViewController* _padViewController;
	SKUIIPhoneSlideshowViewController* _phoneViewController;
	int _selectedIndex;
	NSString* _title;

}

@property (assign,nonatomic,__weak) id<SKUIViewElementSlideshowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUIViewElementLayoutContext * layoutContext;                      //@synthesize layoutContext=_layoutContext - In the implementation block
@property (nonatomic,readonly) int numberOfSlideshowItems; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<SKUIViewElementSlideshowDelegate>)arg1 ;
-(id<SKUIViewElementSlideshowDelegate>)delegate;
-(int)numberOfItemsInSlideshowViewController:(id)arg1 ;
-(id)slideshowViewController:(id)arg1 imageAtIndex:(int)arg2 ;
-(id)slideshowViewController:(id)arg1 imageURLAtIndex:(int)arg2 size:(CGSize*)arg3 ;
-(void)slideshowViewControllerDidFinish:(id)arg1 ;
-(id)initWithShelf:(id)arg1 selectedLockup:(id)arg2 ;
-(int)numberOfSlideshowItems;
-(void)presentFromParentViewController:(id)arg1 ;
-(SKUIViewElementLayoutContext *)layoutContext;
-(void)setLayoutContext:(SKUIViewElementLayoutContext *)arg1 ;
@end

