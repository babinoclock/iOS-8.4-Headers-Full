/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CalDAV/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, NSString;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {

	int _action;
	NSURL* _url;
	int _state;
	NSURL* _publishedURL;

}

@property (assign,nonatomic) int action;                            //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSURL * publishedURL;                  //@synthesize publishedURL=_publishedURL - In the implementation block
@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) int state;                             //@synthesize state=_state - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)publishedURL;
-(void)setPublishedURL:(NSURL *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSURL *)url;
-(int)action;
-(void)setAction:(int)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithSharingAction:(int)arg1 atCalendarURL:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(void)finishWithError:(id)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)startTaskGroup;
@end

