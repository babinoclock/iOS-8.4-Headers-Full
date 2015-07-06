/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBKSyncTransactionProcessing <NSObject>
@optional
-(id)transaction:(id)arg1 syncAnchorForTransactionSyncAnchor:(id)arg2;
-(id)transaction:(id)arg1 keysForTransactionForTransactionKeysToUpdate:(id)arg2;
-(id)transaction:(id)arg1 keysForTransactionForTransactionKeysToDelete:(id)arg2;
-(int)transaction:(id)arg1 conflictDetectionTypeForTransactionDetectionType:(int)arg2;
-(id)transaction:(id)arg1 conflictDetectionOrdinalForKey:(id)arg2;

@required
-(void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
-(void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
-(void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(char)arg4 isDirty:(char*)arg5;
-(void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(char*)arg3;
-(id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;

@end

