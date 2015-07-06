/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIVideoEditorControllerDelegatePrivate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol CKTrimControllerDelegate;
@class CKMediaObject, UIVideoEditorController, NSString;

@interface CKVideoTrimController : NSObject <UIVideoEditorControllerDelegatePrivate, UINavigationControllerDelegate> {

	id<CKTrimControllerDelegate> _delegate;
	CKMediaObject* _originalMediaObject;
	CKMediaObject* _trimmedMediaObject;
	UIVideoEditorController* _editVideoVC;

}

@property (assign,nonatomic) id<CKTrimControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKMediaObject * originalMediaObject;                //@synthesize originalMediaObject=_originalMediaObject - In the implementation block
@property (nonatomic,retain) CKMediaObject * trimmedMediaObject;                 //@synthesize trimmedMediaObject=_trimmedMediaObject - In the implementation block
@property (nonatomic,retain) UIVideoEditorController * editVideoVC;              //@synthesize editVideoVC=_editVideoVC - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<CKTrimControllerDelegate>)arg1 ;
-(id<CKTrimControllerDelegate>)delegate;
-(void)videoEditorControllerDidCancel:(id)arg1 ;
-(void)videoEditorController:(id)arg1 didTrimVideoWithOptions:(id)arg2 ;
-(void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2 ;
-(void)videoEditorController:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithMediaObject:(id)arg1 maxTrimDuration:(double)arg2 ;
-(UIVideoEditorController *)editVideoVC;
-(void)setOriginalMediaObject:(CKMediaObject *)arg1 ;
-(CKMediaObject *)originalMediaObject;
-(void)setTrimmedMediaObject:(CKMediaObject *)arg1 ;
-(CKMediaObject *)trimmedMediaObject;
-(void)setEditVideoVC:(UIVideoEditorController *)arg1 ;
@end

