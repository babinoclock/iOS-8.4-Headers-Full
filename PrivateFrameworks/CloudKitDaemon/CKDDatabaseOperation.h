/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDDatabaseOperation : CKDOperation {

	int _databaseScope;

}

@property (assign,nonatomic) int databaseScope;              //@synthesize databaseScope=_databaseScope - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setDatabaseScope:(int)arg1 ;
-(void)configureRequest:(id)arg1 ;
-(id)newChildOperationInfoOfClass:(Class)arg1 ;
-(int)databaseScope;
@end
