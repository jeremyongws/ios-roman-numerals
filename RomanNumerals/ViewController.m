//
//  ViewController.m
//  RomanNumerals
//
//  Created by Jeremy Ong on 30/03/2016.
//  Copyright © 2016 Jeremy Ong. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextField *numberField;
@property (weak, nonatomic) IBOutlet UILabel *convertedNumber;

@end

@implementation ViewController

- (void)viewDidLoad {
	[super viewDidLoad];
	self.convertedNumber.text = @"";
}

- (IBAction)onNumeralifyButtonPressed:(id)sender {
	NSString *input = self.numberField.text;
	self.convertedNumber.text = [self convertToRoman:input];
}


- (NSString *)convertToRoman:(NSString *)number {
	NSInteger numberInt = [number integerValue];
	NSDictionary *keyValue = @{
														 @"I": [NSNumber numberWithInt:1],
														 @"IV": [NSNumber numberWithInt:4],
														 @"V": [NSNumber numberWithInt:5],
														 @"IX":[NSNumber numberWithInt:9],
														 @"X": [NSNumber numberWithInt:10],
														 @"IL":[NSNumber numberWithInt:40],
														 @"L": [NSNumber numberWithInt:50],
														 @"IC":[NSNumber numberWithInt:90],
														 @"C": [NSNumber numberWithInt:100],
														 @"ID": [NSNumber numberWithInt:400],
														 @"D": [NSNumber numberWithInt:500],
														 @"IM": [NSNumber numberWithInt:900],
														 @"M": [NSNumber numberWithInt:1000]
														 };
	NSString *romanNumeral = [[NSString alloc] init];
	
	NSArray *array = @[@"M", @"IM", @"D", @"ID", @"C", @"IC", @"L", @"IL", @"X", @"IX", @"V", @"IV", @"I"];
	for (id item in array){
		NSInteger division = numberInt / [[keyValue objectForKey:item] integerValue];
		NSInteger remainder = numberInt % [[keyValue objectForKey:item] integerValue];
		for (; division > 0; division--) {
			romanNumeral = [romanNumeral stringByAppendingString:item];
		}
		numberInt = remainder;
	}
	return romanNumeral;
}


@end
