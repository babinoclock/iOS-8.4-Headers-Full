/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UITextViewDelegate.h>

@class CKComposition, CKMessageEntryTextView, CKMessageEntryRichTextView, UIView, NSString;

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate> {

	char _shouldShowSubject;
	char _shouldShowCharacterCount;
	char _needsTextLayout;
	char _needsEnsureSelectionVisible;
	char _ignoreEndEditing;
	CKComposition* _composition;
	CKMessageEntryTextView* _subjectView;
	CKMessageEntryRichTextView* _textView;
	UIView* _activeView;
	float _placeholderHeight;
	UIView* _dividerLine;
	UIEdgeInsets _textAlignmentInsets;
	UIEdgeInsets _subjectAlignmentInsets;

}

@property (assign,nonatomic) char shouldShowSubject;                                                               //@synthesize shouldShowSubject=_shouldShowSubject - In the implementation block
@property (assign,nonatomic) char shouldShowCharacterCount;                                                        //@synthesize shouldShowCharacterCount=_shouldShowCharacterCount - In the implementation block
@property (nonatomic,retain) CKComposition * composition;                                                          //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) CKMessageEntryTextView * subjectView;                                                 //@synthesize subjectView=_subjectView - In the implementation block
@property (nonatomic,retain) CKMessageEntryRichTextView * textView;                                                //@synthesize textView=_textView - In the implementation block
@property (getter=isActive,nonatomic,readonly) char active; 
@property (assign,nonatomic) UIView * activeView;                                                                  //@synthesize activeView=_activeView - In the implementation block
@property (nonatomic,copy) NSString * placeholderText; 
@property (getter=isSingleLine,nonatomic,readonly) char singleLine; 
@property (getter=isShowingDictationPlaceholder,nonatomic,readonly) char showingDictationPlaceholder; 
@property (assign,nonatomic) float placeholderHeight;                                                              //@synthesize placeholderHeight=_placeholderHeight - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentTextAlignmentInsets; 
@property (assign,nonatomic) char balloonColor; 
@property (assign,nonatomic) UIEdgeInsets textAlignmentInsets;                                                     //@synthesize textAlignmentInsets=_textAlignmentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets subjectAlignmentInsets;                                                  //@synthesize subjectAlignmentInsets=_subjectAlignmentInsets - In the implementation block
@property (nonatomic,retain) UIView * dividerLine;                                                                 //@synthesize dividerLine=_dividerLine - In the implementation block
@property (assign,nonatomic) char needsTextLayout;                                                                 //@synthesize needsTextLayout=_needsTextLayout - In the implementation block
@property (assign,nonatomic) char needsEnsureSelectionVisible;                                                     //@synthesize needsEnsureSelectionVisible=_needsEnsureSelectionVisible - In the implementation block
@property (assign,nonatomic) char ignoreEndEditing;                                                                //@synthesize ignoreEndEditing=_ignoreEndEditing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKComposition *)composition;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)isActive;
-(void)setTextView:(CKMessageEntryRichTextView *)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)acceptAutocorrection;
-(CKMessageEntryRichTextView *)textView;
-(void)calculateTextMetrics;
-(UIView *)dividerLine;
-(char)shouldShowCharacterCount;
-(UIEdgeInsets)contentTextAlignmentInsets;
-(char)isSingleLine;
-(float)placeholderHeight;
-(void)setShouldShowSubject:(char)arg1 ;
-(void)setShouldShowCharacterCount:(char)arg1 ;
-(void)setDividerLine:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 shouldShowSubject:(char)arg2 shouldShowCharacterCount:(char)arg3 ;
-(void)setComposition:(CKComposition *)arg1 ;
-(void)setBalloonColor:(char)arg1 ;
-(char)isShowingDictationPlaceholder;
-(char)shouldShowSubject;
-(void)setTextAlignmentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)textAlignmentInsets;
-(UIView *)activeView;
-(CKMessageEntryTextView *)subjectView;
-(char)makeActive;
-(char)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2 ;
-(char)balloonColor;
-(char)needsTextLayout;
-(UIEdgeInsets)subjectAlignmentInsets;
-(void)ensureSelectionVisibleIfNeeded;
-(void)setNeedsTextLayout:(char)arg1 ;
-(void)setSubjectView:(CKMessageEntryTextView *)arg1 ;
-(void)invalidateComposition;
-(void)setIgnoreEndEditing:(char)arg1 ;
-(void)setActiveView:(UIView *)arg1 ;
-(char)ignoreEndEditing;
-(void)setNeedsEnsureSelectionVisible:(char)arg1 ;
-(char)needsEnsureSelectionVisible;
-(void)setSubjectAlignmentInsets:(UIEdgeInsets)arg1 ;
-(void)setPlaceholderHeight:(float)arg1 ;
@end

