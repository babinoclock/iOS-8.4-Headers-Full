/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:55 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBFolderViewDelegate.h>

@class SBIconViewMap, SBFolderView, NSString;

@interface SBHomeScreenPreviewView : UIView <SBFolderViewDelegate> {

	SBIconViewMap* _viewMap;
	SBFolderView* _folderContent;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preview;
+(void)cleanupPreview;
-(void)folderView:(id)arg1 currentPageIndexDidChange:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 iconController:(id)arg2 ;
-(Class)iconListViewClassForFolderView:(id)arg1 ;
-(void)folderViewWillBeginScrolling:(id)arg1 ;
-(void)folderViewDidEndScrolling:(id)arg1 ;
-(void)folderViewShouldClose:(id)arg1 ;
-(void)folderViewShouldBeginEditing:(id)arg1 ;
-(void)dealloc;
@end

