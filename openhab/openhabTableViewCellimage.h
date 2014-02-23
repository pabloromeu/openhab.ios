//
//  openhabTableViewCellimage.h
//  openhab
//
//  Created by Pablo Romeu Guallart on 18/12/11.
//	Eclipse Public License - v 1.0
//
//  THE ACCOMPANYING PROGRAM IS PROVIDED UNDER THE TERMS OF THIS
//	ECLIPSE PUBLIC LICENSE ("AGREEMENT"). ANY USE, REPRODUCTION OR
//	DISTRIBUTION OF THE PROGRAM CONSTITUTES RECIPIENT'S ACCEPTANCE
//	OF THIS AGREEMENT.
//
//	See license.txt for more info

//

#import "openhabTableViewCell.h"

@interface openhabTableViewCellimage : openhabTableViewCell
{
	__weak IBOutlet UIImageView*bigImage;
}
@property (nonatomic,weak) IBOutlet UIImageView*bigImage;
@property (nonatomic,weak) NSTimer*theTimer;
@end