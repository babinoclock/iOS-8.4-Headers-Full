/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUICSiriLanguageDelegate;
@class NSString;

@interface SUICSiriLanguage : NSObject {

	char _setupAssistantNeedsToRunChecked;
	char _setupAssistantNeedsToRunAvailable;
	NSString* _spokenLanguageCode;
	id<SUICSiriLanguageDelegate> _delegate;

}

@property (nonatomic,copy) NSString * spokenLanguageCode;                                                                   //@synthesize spokenLanguageCode=_spokenLanguageCode - In the implementation block
@property (getter=_delegate,nonatomic,__weak,readonly) id<SUICSiriLanguageDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char setupAssistantNeedsToRunChecked;                                                          //@synthesize setupAssistantNeedsToRunChecked=_setupAssistantNeedsToRunChecked - In the implementation block
@property (assign,getter=_setupAssistantNeedsToRunAvailable,nonatomic) char setupAssistantNeedsToRunAvailable;              //@synthesize setupAssistantNeedsToRunAvailable=_setupAssistantNeedsToRunAvailable - In the implementation block
-(void)dealloc;
-(id)init;
-(id)_delegate;
-(id)_computeSpokenLanguageCode;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(void)_updateSpokenLanguageCode;
-(void)_setSpokenLanguageCode:(id)arg1 ;
-(NSString *)spokenLanguageCode;
-(id)initWithDelegate:(id)arg1 ;
-(char)_setupAssistantNeedsToRunAvailable;
-(char)setupAssistantNeedsToRunChecked;
-(void)setSetupAssistantNeedsToRunChecked:(char)arg1 ;
-(void)setSetupAssistantNeedsToRunAvailable:(char)arg1 ;
-(void)_currentLocaleDidChange:(id)arg1 ;
@end
