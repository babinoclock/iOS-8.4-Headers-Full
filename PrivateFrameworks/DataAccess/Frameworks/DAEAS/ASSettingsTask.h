/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray, NSDictionary, DASettingsRequestParams;

@interface ASSettingsTask : ASTask {

	NSArray* _getters;
	NSDictionary* _setters;
	DASettingsRequestParams* _requestParams;
	int _key;
	int _status;
	id _result;

}

@property (nonatomic,retain) NSArray * getters;                                    //@synthesize getters=_getters - In the implementation block
@property (nonatomic,retain) NSDictionary * setters;                               //@synthesize setters=_setters - In the implementation block
@property (nonatomic,retain) DASettingsRequestParams * requestParams;              //@synthesize requestParams=_requestParams - In the implementation block
@property (assign,nonatomic) int key;                                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) int status;                                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) id result;                                            //@synthesize result=_result - In the implementation block
-(id)init;
-(int)key;
-(void)setKey:(int)arg1 ;
-(id)result;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)setResult:(id)arg1 ;
-(int)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(char)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(char)processContext:(id)arg1 ;
-(void)setGetters:(NSArray *)arg1 ;
-(void)setSetters:(NSDictionary *)arg1 ;
-(NSArray *)getters;
-(NSDictionary *)setters;
-(DASettingsRequestParams *)requestParams;
-(void)setRequestParams:(DASettingsRequestParams *)arg1 ;
@end

