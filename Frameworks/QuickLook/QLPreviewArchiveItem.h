/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLPreviewUIItem.h>

@class UIImage, UIDocumentInteractionController, QLPreviewThumbnailGenerator, NSString, NSURL, NSOperation, NSOperationQueue, NSMutableArray, NSError, NSArray;

@interface QLPreviewArchiveItem : NSObject <QLPreviewUIItem> {

	UIDocumentInteractionController* _archiveController;
	QLPreviewThumbnailGenerator* _thumbnailGenerator;
	NSString* _path;
	NSURL* _unarchivedURL;
	NSOperation* _unarchiveOperation;
	NSOperationQueue* _unarchiveOperationQueue;
	NSMutableArray* _completionBlocks;
	NSError* _unarchivingError;
	int _previewItemIndex;
	int _UIItemIndex;
	int _level;
	NSURL* _rootUnzippingURL;
	NSArray* _subItems;

}

@property (readonly) NSString * path; 
@property (readonly) char unarchived; 
@property (assign) int previewItemIndex;                            //@synthesize previewItemIndex=_previewItemIndex - In the implementation block
@property (assign) int UIItemIndex;                                 //@synthesize UIItemIndex=_UIItemIndex - In the implementation block
@property (assign) int level;                                       //@synthesize level=_level - In the implementation block
@property (retain) NSURL * rootUnzippingURL;                        //@synthesize rootUnzippingURL=_rootUnzippingURL - In the implementation block
@property (copy) NSArray * subItems;                                //@synthesize subItems=_subItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
@property (readonly) UIImage * icon; 
@property (readonly) char isFolder; 
-(UIImage *)icon;
-(char)isPromisedItem;
-(void)updateIconWithSize:(CGSize)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelIconUpdate;
-(int)previewItemIndex;
-(id)initWithArchiveController:(id)arg1 path:(id)arg2 ;
-(void)setPreviewItemIndex:(int)arg1 ;
-(void)setUIItemIndex:(int)arg1 ;
-(void)setRootUnzippingURL:(NSURL *)arg1 ;
-(void)setSubItems:(NSArray *)arg1 ;
-(NSArray *)subItems;
-(NSURL *)rootUnzippingURL;
-(void)unarchiveWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)unarchived;
-(id)unarchivingError;
-(int)UIItemIndex;
-(void)dealloc;
-(NSString *)description;
-(NSString *)path;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(id)initWithPath:(id)arg1 ;
-(NSURL *)previewItemURL;
-(void)cleanup;
-(char)isFolder;
@end

