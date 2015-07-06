/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSBundleController.h>

@class MCProfileInfo, NSArray, PSListController, PSSpecifier, NPSDomainAccessor;

@interface MCUIBundleController : PSBundleController {

	char _isForPairedDevice;
	MCProfileInfo* _mdmProfileInfo;
	NSArray* _configProfilesInfo;
	PSListController* _parentController;
	PSSpecifier* _specifier;
	NPSDomainAccessor* _nanoDomainAccessor;

}

@property (assign,nonatomic) unsigned nanoProfileCount; 
@property (assign,nonatomic,__weak) PSListController * parentController;                                //@synthesize parentController=_parentController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                                   //@synthesize specifier=_specifier - In the implementation block
@property (setter=_setMDMProfileInfo:,nonatomic,retain) MCProfileInfo * _mdmProfileInfo;                //@synthesize mdmProfileInfo=_mdmProfileInfo - In the implementation block
@property (setter=_setConfigProfilesInfo:,nonatomic,retain) NSArray * _configProfilesInfo;              //@synthesize configProfilesInfo=_configProfilesInfo - In the implementation block
@property (assign,nonatomic) char isForPairedDevice;                                                    //@synthesize isForPairedDevice=_isForPairedDevice - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * nanoDomainAccessor;                                    //@synthesize nanoDomainAccessor=_nanoDomainAccessor - In the implementation block
+(id)sharedInstance;
+(id)provisioningProfilesWithValidityCheck:(char)arg1 ;
+(id)configurationProfiles;
+(id)provisioningProfiles;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)dealloc;
-(void)load;
-(char)isForPairedDevice;
-(void)_reloadAllProfilesInBackground;
-(void)_unpairedNotification:(id)arg1 ;
-(void)_configurationProfilesChanged:(id)arg1 ;
-(id)_profileInfoForSpecifier:(id)arg1 ;
-(unsigned)nanoProfileCount;
-(MCProfileInfo *)_mdmProfileInfo;
-(NSArray *)_configProfilesInfo;
-(NPSDomainAccessor *)nanoDomainAccessor;
-(id)_specifier;
-(Class)_controllerClassForCurrentProfilesAndUpdatedUserInfo:(id)arg1 ;
-(unsigned)_profileCount;
-(void)_updateSpecifierProfileInfo;
-(void)_updateSpecifierControllerClass;
-(void)_setMDMProfileInfo:(id)arg1 ;
-(void)_setConfigProfilesInfo:(id)arg1 ;
-(void)_updateUIWithNewProfileList;
-(void)setNanoProfileCount:(unsigned)arg1 ;
-(void)incrementNanoProfileCount;
-(void)decrementNanoProfileCount;
-(void)setIsForPairedDevice:(char)arg1 ;
-(void)setNanoDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(PSListController *)parentController;
-(void)setParentController:(PSListController *)arg1 ;
-(void)unload;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(id)initWithParentListController:(id)arg1 properties:(id)arg2 ;
@end

