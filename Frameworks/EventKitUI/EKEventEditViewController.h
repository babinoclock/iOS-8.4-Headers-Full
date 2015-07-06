/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UINavigationController.h>

@protocol EKEventEditViewDelegate;
@class EKEvent, NSString, EKEventStore, EKEventEditor, UIColor;

@interface EKEventEditViewController : UINavigationController {

	EKEvent* _event;
	NSString* _eventId;
	EKEventStore* _store;
	id<EKEventEditViewDelegate> _editViewDelegate;
	int _transitionForModalViewPresentation;
	EKEventEditor* _editor;
	EKEventEditViewController* _strongSelf;

}

@property (assign,nonatomic,__weak) id<EKEventEditViewDelegate> editViewDelegate;              //@synthesize editViewDelegate=_editViewDelegate - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore;                                        //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) EKEvent * event; 
@property (assign,nonatomic) char showAttachments; 
@property (assign,nonatomic) char scrollToNotes; 
@property (assign,nonatomic) char canHideDoneAndCancelButtons; 
@property (nonatomic,retain) UIColor * editorBackgroundColor; 
@property (assign,nonatomic) int transitionForModalViewPresentation;                           //@synthesize transitionForModalViewPresentation=_transitionForModalViewPresentation - In the implementation block
@property (assign,nonatomic) float editorNavBarLeftContentInset; 
@property (assign,nonatomic) float editorNavBarRightContentInset; 
@property (nonatomic,retain) EKEventEditor * editor;                                           //@synthesize editor=_editor - In the implementation block
@property (nonatomic,retain) EKEventEditViewController * strongSelf;                           //@synthesize strongSelf=_strongSelf - In the implementation block
+(void)setDefaultDatesForEvent:(id)arg1 ;
-(EKEventStore *)eventStore;
-(void)_storeChanged:(id)arg1 ;
-(void)setTransitionForModalViewPresentation:(int)arg1 ;
-(void)refreshStartAndEndDates;
-(char)saveWithSpan:(int)arg1 animated:(char)arg2 ;
-(char)scrollToNotes;
-(void)setScrollToNotes:(char)arg1 ;
-(char)showAttachments;
-(void)setShowAttachments:(char)arg1 ;
-(char)canHideDoneAndCancelButtons;
-(void)setCanHideDoneAndCancelButtons:(char)arg1 ;
-(void)handleTapOutside;
-(void)completeAndSave;
-(char)willPresentDialogOnSave;
-(void)editor:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2 ;
-(void)setEditorBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)editorBackgroundColor;
-(void)setEditorNavBarLeftContentInset:(float)arg1 ;
-(float)editorNavBarLeftContentInset;
-(void)setEditorNavBarRightContentInset:(float)arg1 ;
-(float)editorNavBarRightContentInset;
-(id<EKEventEditViewDelegate>)editViewDelegate;
-(void)setEditViewDelegate:(id<EKEventEditViewDelegate>)arg1 ;
-(int)transitionForModalViewPresentation;
-(EKEventEditor *)editor;
-(void)setEditor:(EKEventEditor *)arg1 ;
-(EKEventEditViewController *)strongSelf;
-(void)setStrongSelf:(EKEventEditViewController *)arg1 ;
-(void)dealloc;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(CGSize)preferredContentSize;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setEvent:(EKEvent *)arg1 ;
-(EKEvent *)event;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)cancelEditing;
@end

