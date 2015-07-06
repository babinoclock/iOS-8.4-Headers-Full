/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MFAddressPickerReformatter : NSObject {

	NSArray* _addresses;
	NSArray* _reformattedAddresses;
	float _maximumWidth;
	float _minimumFontSize;
	float _maximumFontSize;
	float _fontSize;
	char _attributesDisabled;

}
-(void)setMinimumFontSize:(float)arg1 maximumFontSize:(float)arg2 ;
-(unsigned)numberOfReformattedAddresses;
-(id)reformattedAddressAtIndex:(unsigned)arg1 ;
-(void)_invalidateReformattedAddresses;
-(void)_updateReformattedAddressesIfNecessary;
-(unsigned)_defaultOptions;
-(void)_determineFontSize:(char*)arg1 ;
-(void)_truncateIdenticalLocalPartsWithDifferentDomainParts;
-(void)_attemptUniquingDisplayedStrings;
-(void)_truncateIdenticalLocalPartsWithDifferentDomainPartsWithTailLength:(unsigned)arg1 options:(unsigned)arg2 ;
-(char)_attemptUniquingDisplayedStringsUsingBlock:(/*^block*/id)arg1 ;
-(void)_expandAllLocalParts;
-(id)_reformattedAddressesByDisplayedStrings;
-(char)_reformattedAddressesByDisplayedStringsAreUnique:(id)arg1 ;
-(id)_saveMiddleTruncationRanges;
-(void)_restoreMiddleTruncationRanges:(id)arg1 ;
-(void)setAttributesDisabled:(char)arg1 ;
-(id)reformattedAddressStringAtIndex:(unsigned)arg1 ;
-(void)setAddresses:(id)arg1 ;
-(void)dealloc;
-(void)setMaximumWidth:(float)arg1 ;
-(void)setFontSize:(float)arg1 ;
@end

