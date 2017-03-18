#include <iostream>

int main() {
	double gradeProject1;
	double gradeProject2;
	double gradeProject3;
	double gradeProject4;
	double gradeProject5;
	double averageGradeProjects1thru5;
	double weightedAverageGradeProjects1thru5;
	double gradeProject6;
	double gradeProject7;
	double averageGradeProjects;
	double weightedAverageGradeProjects;
	double gradeMidterm;
	double weightedMidtermGrade;
	double weightedGradeThusFar;
	double weightedGradePreFinal;
	double remainingPointsNeededConsideringOnly1thru5;
	double gradeFinal;
	double averageMidtermFinal;
	double weightedGradeFinal;
	double gradeFinalClass;

	std::cout << "Please enter your grades for project 1 through 5 as a double ranging from 0 to 100." << std::endl;
	std::cout << "Project 1: ";
	std::cin >> gradeProject1;
	std::cout << "Project 2: ";
	std::cin >> gradeProject2;
	std::cout << "Project 3: ";
	std::cin >> gradeProject3;
	std::cout << "Project 4: ";
	std::cin >> gradeProject4;
	std::cout << "Project 5: ";
	std::cin >> gradeProject5;

	averageGradeProjects1thru5 = ((gradeProject1 + gradeProject2 + gradeProject3 + gradeProject4 + gradeProject5) / 5);
	std::cout << "The average grade for your Projects thus far is " << averageGradeProjects1thru5 << " out of a 100. You're gonna do great on the next ones!" << std::endl;
	
	weightedAverageGradeProjects1thru5 = 0.4 * averageGradeProjects1thru5;
	std::cout << "This means that, in terms of assignments, you currently have " << weightedAverageGradeProjects1thru5 << " points in your gradebook for that section!" << std::endl;

	std::cout << "Now let's add the midterm! Please enter your score for the midterm! (a double ranging from 0 to 100)" << std::endl;
	std::cout << "Midterm 1: ";
	std::cin >> gradeMidterm;

	weightedMidtermGrade = 0.25 * gradeMidterm;
	std::cout << "This means that, in terms of the Midterm, you currently have " << weightedMidtermGrade << " points in your gradebook for that section!" << std::endl;
	
	weightedGradeThusFar = weightedAverageGradeProjects1thru5 + weightedMidtermGrade;
	std::cout << "So for all of your efforts this far in the class you have " << weightedGradeThusFar << " points in your gradebook out of a 100!" << std::endl;

	std::cout << "Let's consider what it takes to get an A, above or equal to a 93, in this class after the final!" << std::endl;
	remainingPointsNeededConsideringOnly1thru5 = 93 - weightedGradeThusFar;
	std::cout << "You only need to accumulate " << remainingPointsNeededConsideringOnly1thru5 << " points more with the remaining two assignments and on the final!" << std::endl;

	std::cout << "What do you think you will get on the next two projects?" << std::endl;
	std::cout << "Project 6: ";
	std::cin >> gradeProject6;
	std::cout << "Project 7: ";
	std::cin >> gradeProject7;

	averageGradeProjects = ((gradeProject1 + gradeProject2 + gradeProject3 + gradeProject4 + gradeProject5 + gradeProject6 + gradeProject7) / 7);
	std::cout << "The average grade for your Projects in the end would be " << averageGradeProjects << " out of a 100. You're gonna do great on the final!" << std::endl;

	weightedAverageGradeProjects = 0.4 * averageGradeProjects;
	std::cout << "This means that, in terms of assignments, you currently have " << weightedAverageGradeProjects << " points in your gradebook for that section!" << std::endl;

	weightedGradePreFinal = weightedAverageGradeProjects + weightedMidtermGrade;
	std::cout << "So for all of your efforts before the final, you'd have " << weightedGradePreFinal << " points in your gradebook out of a 100!" << std::endl;


	std::cout << "What will you get on the final?" << std::endl;
	std::cout << "Final Exam Grade: ";
	std::cin >> gradeFinal;
	averageMidtermFinal = ((gradeFinal + gradeMidterm) / 2);
	if (averageGradeProjects > (averageMidtermFinal + 30)) {
		averageGradeProjects = averageMidtermFinal + 30;
		weightedAverageGradeProjects = 0.4 * averageGradeProjects;
		weightedGradePreFinal = weightedAverageGradeProjects + weightedMidtermGrade;
	}
	weightedGradeFinal = 0.35 * gradeFinal;
	gradeFinalClass = weightedGradeFinal + weightedGradePreFinal;

	std::cout << "Your final grade in the class would be " << gradeFinalClass << " points out of a 100!" << std::endl;

	return (0);
}