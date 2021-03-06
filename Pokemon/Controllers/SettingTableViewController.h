//
//  AccountSettingTableViewController.h
//  iPokeMon
//
//  Created by Kaijie Yu on 2/10/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

typedef enum {
  kSectionGeneral = 0,
  kSectionAbout,
  kNumberOfSections
}Section;

typedef enum {
  kSectionGeneralLocationServices = 0,
  kSectionGeneralBandwidthUsage,
  kSectionGeneralGameSettings,
  kNumberOfSectionGeneralRows
}SectionGeneralRow;

typedef enum {
  kSectionAboutRowVersion = 0,
  kSectionAboutRowFeedback,
  kSectionAboutRowLogout,
  kNumberOfSectionAboutRows
}SectionAboutRow;

@interface SettingTableViewController : UITableViewController <UIAlertViewDelegate, MFMailComposeViewControllerDelegate>

@end
