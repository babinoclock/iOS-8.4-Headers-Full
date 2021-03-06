/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PHAsset, NSData;

@interface PHAssetMomentProperties : NSObject {

	char _reverseLocationDataIsValid;
	PHAsset* _asset;
	NSData* _reverseLocationData;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) char reverseLocationDataIsValid;              //@synthesize reverseLocationDataIsValid=_reverseLocationDataIsValid - In the implementation block
@property (nonatomic,readonly) NSData * reverseLocationData;                 //@synthesize reverseLocationData=_reverseLocationData - In the implementation block
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 ;
-(PHAsset *)asset;
-(NSData *)reverseLocationData;
-(char)reverseLocationDataIsValid;
@end

