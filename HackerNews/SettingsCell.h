//
//  SettingsCell.h
//  HackerNews
//
//  Created by Ben Gordon on 1/19/13.
//  Copyright (c) 2013 Benjamin Gordon. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kCellSettingsHeight 180
#define kCellSettingsLoggedInHeight 212

@interface SettingsCell : UITableViewCell


@property (retain, nonatomic) IBOutlet UIButton *readabilityButton;
@property (retain, nonatomic) IBOutlet UIButton *readabilityHidden;
@property (retain, nonatomic) IBOutlet UILabel *readabilityLabel;

@property (retain, nonatomic) IBOutlet UIButton *markAsReadButton;
@property (retain, nonatomic) IBOutlet UIButton *markAsReadHidden;
@property (retain, nonatomic) IBOutlet UILabel *markAsReadLabel;

@property (retain, nonatomic) IBOutlet UIButton *nightModeButton;
@property (retain, nonatomic) IBOutlet UIButton *themeHidden;
@property (retain, nonatomic) IBOutlet UIButton *dayModeButton;
@property (retain, nonatomic) IBOutlet UILabel *themeLabel;

@property (weak, nonatomic) IBOutlet UIButton *logoutButton;
@property (weak, nonatomic) IBOutlet UILabel *logoutLabel;
@property (weak, nonatomic) IBOutlet UIButton *logoutHidden;


@end
