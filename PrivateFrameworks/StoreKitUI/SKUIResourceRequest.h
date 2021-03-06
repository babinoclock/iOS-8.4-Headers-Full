/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/NSCopying.h>

@interface SKUIResourceRequest : NSObject <NSCopying> {

	id _cacheKey;
	unsigned _requestID;

}

@property (nonatomic,readonly) char cachesInMemory; 
@property (nonatomic,retain) id cacheKey;                             //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) unsigned requestIdentifier;              //@synthesize requestID=_requestID - In the implementation block
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cacheKey;
-(void)setCacheKey:(id)arg1 ;
-(unsigned)requestIdentifier;
-(char)cachesInMemory;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(id)_initSKUIResourceRequest;
-(void)setRequestIdentifier:(unsigned)arg1 ;
@end

