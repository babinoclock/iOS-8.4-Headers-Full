/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDocumentPickerContainerModel.h>

@class NSArray, NSURL, NSString, _UIDocumentPickerDirectoryObserver;

@interface _UIDocumentPickerURLContainerModel : _UIDocumentPickerContainerModel {

	NSArray* _modelObjects;
	NSURL* _url;
	NSString* _displayTitle;
	_UIDocumentPickerDirectoryObserver* _observer;

}

@property (nonatomic,retain) NSURL * url;                                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * displayTitle;                                      //@synthesize displayTitle=_displayTitle - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerDirectoryObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSArray * modelObjects;                                     //@synthesize modelObjects=_modelObjects - In the implementation block
+(void)_tagColorsDidChange;
+(id)tagColorsByTag;
+(id)_tagBlipColors;
+(id)allTags;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(id)scopes;
-(char)afterInitialUpdate;
-(void)updateSortDescriptors;
-(NSArray *)modelObjects;
-(void)startMonitoringChanges;
-(void)stopMonitoringChanges;
-(NSString *)displayTitle;
-(void)refreshItem:(id)arg1 thumbnailOnly:(char)arg2 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setDisplayTitle:(NSString *)arg1 ;
-(_UIDocumentPickerDirectoryObserver *)observer;
-(void)setObserver:(_UIDocumentPickerDirectoryObserver *)arg1 ;
-(id)_containerListDidChange;
-(void)modelChangedWithSnapshot:(id)arg1 differences:(id)arg2 ;
-(void)callUpdateHandlerWithNewItems:(id)arg1 diff:(id)arg2 ;
-(char)shouldShowContainerForType:(id)arg1 ;
-(char)shouldAllowPickingType:(id)arg1 ;
-(void)setModelObjects:(NSArray *)arg1 ;
-(id)initWithURL:(id)arg1 ;
@end

