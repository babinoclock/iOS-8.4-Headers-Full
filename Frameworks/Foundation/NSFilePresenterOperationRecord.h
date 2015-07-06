/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NSFilePresenterOperationRecord : NSObject {

	NSString* operationDescription;
	int state;
	id reactor;

}

@property (readonly) NSString * operationDescription; 
@property (readonly) int state; 
@property (assign) id reactor; 
+(id)operationRecordWithDescription:(id)arg1 ;
-(void)setReactor:(id)arg1 ;
-(void)didBegin;
-(void)willEnd;
-(void)didEnd;
-(id)reactor;
-(NSString *)operationDescription;
-(void)dealloc;
-(id)description;
-(int)state;
@end
