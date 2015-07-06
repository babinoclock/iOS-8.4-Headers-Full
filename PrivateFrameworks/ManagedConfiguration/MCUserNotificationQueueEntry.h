/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MCUserNotificationQueueEntry : NSObject {

	char _displayOnLockScreen;
	char _displayInAppWhitelistModes;
	NSString* _title;
	NSString* _message;
	NSString* _defaultButtonText;
	NSString* _alternateButtonText;
	NSString* _otherButtonText;
	/*^block*/id _completionBlock;
	id _notification;
	double _dismissAfterTimeInterval;

}

@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * defaultButtonText;                 //@synthesize defaultButtonText=_defaultButtonText - In the implementation block
@property (nonatomic,retain) NSString * alternateButtonText;               //@synthesize alternateButtonText=_alternateButtonText - In the implementation block
@property (nonatomic,retain) NSString * otherButtonText;                   //@synthesize otherButtonText=_otherButtonText - In the implementation block
@property (assign,nonatomic) char displayOnLockScreen;                     //@synthesize displayOnLockScreen=_displayOnLockScreen - In the implementation block
@property (assign,nonatomic) char displayInAppWhitelistModes;              //@synthesize displayInAppWhitelistModes=_displayInAppWhitelistModes - In the implementation block
@property (assign,nonatomic) double dismissAfterTimeInterval;              //@synthesize dismissAfterTimeInterval=_dismissAfterTimeInterval - In the implementation block
@property (nonatomic,copy) id completionBlock;                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) id notification;                              //@synthesize notification=_notification - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)notification;
-(NSString *)title;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setNotification:(id)arg1 ;
-(NSString *)defaultButtonText;
-(void)setDefaultButtonText:(NSString *)arg1 ;
-(NSString *)alternateButtonText;
-(void)setAlternateButtonText:(NSString *)arg1 ;
-(NSString *)otherButtonText;
-(void)setOtherButtonText:(NSString *)arg1 ;
-(char)displayOnLockScreen;
-(void)setDisplayOnLockScreen:(char)arg1 ;
-(char)displayInAppWhitelistModes;
-(void)setDisplayInAppWhitelistModes:(char)arg1 ;
-(double)dismissAfterTimeInterval;
-(void)setDismissAfterTimeInterval:(double)arg1 ;
@end

