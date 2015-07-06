/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, ISURLOperation, NSString;

@interface IKLoadRecord : NSObject {

	NSURL* _URL;
	ISURLOperation* _opertaion;
	NSString* _scriptStr;

}

@property (nonatomic,retain) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) ISURLOperation * opertaion;              //@synthesize opertaion=_opertaion - In the implementation block
@property (nonatomic,retain) NSString * scriptStr;                    //@synthesize scriptStr=_scriptStr - In the implementation block
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(ISURLOperation *)opertaion;
-(void)setOpertaion:(ISURLOperation *)arg1 ;
-(NSString *)scriptStr;
-(void)setScriptStr:(NSString *)arg1 ;
@end

