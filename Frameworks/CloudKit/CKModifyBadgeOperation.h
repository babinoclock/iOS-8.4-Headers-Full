/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@interface CKModifyBadgeOperation : CKOperation {

	unsigned _badgeValue;
	/*^block*/id _modifyBadgeCompletionBlock;

}

@property (assign,nonatomic) unsigned badgeValue;                      //@synthesize badgeValue=_badgeValue - In the implementation block
@property (nonatomic,copy) id modifyBadgeCompletionBlock;              //@synthesize modifyBadgeCompletionBlock=_modifyBadgeCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)performCKOperation;
-(id)modifyBadgeCompletionBlock;
-(void)setModifyBadgeCompletionBlock:(id)arg1 ;
-(id)init;
-(void)setBadgeValue:(unsigned)arg1 ;
-(unsigned)badgeValue;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)initWithBadgeValue:(unsigned)arg1 ;
@end

