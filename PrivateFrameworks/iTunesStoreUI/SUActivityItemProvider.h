/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>

@protocol SUActivityItemProviderDelegate, OS_dispatch_queue;
@class UIActivity, NSObject, UIImage;

@interface SUActivityItemProvider : UIActivityItemProvider {

	UIActivity* _activity;
	id<SUActivityItemProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	id _lastProvidedItem;
	UIImage* _previewImage;

}

@property (__weak) id<SUActivityItemProviderDelegate> delegate; 
@property (setter=setSUActivity:,retain) UIActivity * suActivity; 
@property (readonly) id suLastProvidedItem; 
@property (setter=setSUPreviewImage:,retain) UIImage * suPreviewImage; 
-(void)dealloc;
-(void)setDelegate:(id<SUActivityItemProviderDelegate>)arg1 ;
-(id<SUActivityItemProviderDelegate>)delegate;
-(id)item;
-(id)initWithPlaceholderItem:(id)arg1 ;
-(void)setSUActivity:(id)arg1 ;
-(id)suLastProvidedItem;
-(UIImage *)suPreviewImage;
-(UIActivity *)suActivity;
-(void)setSUPreviewImage:(id)arg1 ;
@end

