/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SVSBundleIdentifierMap;

@interface SiriUIPluginManager : NSObject {

	SVSBundleIdentifierMap* _identifierMap;

}
+(id)sharedInstance;
-(void)_loadBundleMapsIfNecessary;
-(id)_factoryInstancesForAceObject:(id)arg1 andAceObject:(id)arg2 ;
-(id)_createDebugViewControllerForAceObject:(id)arg1 ;
-(id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2 ;
-(char)_listItem:(id)arg1 isEqualToListItem:(id)arg2 ;
-(char)_listItem:(id)arg1 isPreferredOverListItem:(id)arg2 ;
-(id)_bundleSearchPaths;
-(id)transcriptItemForObject:(id)arg1 ;
-(id)listItemToPickInAutodisambiguationForListItems:(id)arg1 ;
-(id)speakableProviderForObject:(id)arg1 ;
@end

