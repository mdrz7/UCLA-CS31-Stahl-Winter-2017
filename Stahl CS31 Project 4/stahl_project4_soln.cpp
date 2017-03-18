// find the position of the smallest one

int locateMinimum( const string array[ ], int n )

{

    int result( -1 );

    string minimum( "" );

    

    // at first, the minimum item will be in position 0, if the array has any elements

    if (n > 0)

    {

        minimum = array[ 0 ];

        result = 0;

    }

    for( int i = 1; i < n; i++ )

    {

        if (array[i] < minimum)

        {

            minimum = array[ i ];

            result = i;

        }

    }

    return( result );

}



// find last occurrence of target in the array

int findLastOccurrence( const string array[ ], int n, string target )

{

    int result( -1 );

    if (n > 0)

    {

        for( int i = n-1; i >= 0; i-- )

        {

            if (array[ i ] == target)

            {

                result = i;

                break;

            }

        }

    }

    return( result );

}



// make item1 item n, make item n item 1 and so on...

int flipAround( string array[ ], int n )

{

    // keep track of all the flips we make

    int result = 0;

    for( int pos1 = 0, pos2 = n - 1; pos1 < pos2; pos1++, pos2-- )

    {

        string stringAtPos1 = array[ pos1 ];

        string stringAtPos2 = array[ pos2 ];

        

        array[ pos1 ] = stringAtPos2;

        array[ pos2 ] = stringAtPos1;

        

        result = result + 1;

    }

    return( result );

}



// verify that the string array has no duplicated values

bool hasNoDuplicates( const string array[ ], int n )

{

    bool result( true );

    if (n < 0)

    {

        result = false;

    }

    for( int i = 0; i < n; i++ )

    {

        string lookingFor = array[ i ];

        // this inner loop can really start from i+1, not 0

        // because earlier iterations would have found the duplicate already, if it exists

        for( int j = i+1; j < n; j++ )

        {

            if (array[ j ] == lookingFor)

            {

                result = false;

                break;

            }

        }

        // why keep looping if we already know the answer is false?

        if (!result)

        {

            break;

        }

    }

    return( result );

}

// build a new array from the items held in array1 and array2

// ensure there are no duplicated values in the new array

void unionWithNoDuplicates( const string array1[ ], int n1, const string array2[ ], int n2,

                            string resultingString[ ], int& resultingSize )

{

    resultingSize = -1;

    bool notFound( true );

    

    if (n1 > 0 && n2 > 0)

    {

        resultingSize = 0;

        // items in array1 not already in the resultingArray should get added

        for( int i = 0; i < n1; i++ )

        {

            notFound = true;

            string lookingFor = array1[ i ];

            

            for( int j = 0; j < resultingSize; j++ )

            {

                // is the lookingFor value already in the resultingString array?

                if (resultingString[ j ] == lookingFor)

                {

                    notFound = false;

                    break;

                }

            }

            if (notFound)

            {

                // lookingFor was not found at all...

                resultingString[ resultingSize ] = lookingFor;

                resultingSize = resultingSize + 1;

            }

        }

        // items in array2 not already in the resultingArray should get added

        for( int i = 0; i < n2; i++ )

        {

            notFound = true;

            string lookingFor = array2[ i ];

            

            for( int j = 0; j < resultingSize; j++ )

            {

                // is the lookingFor value already in the resultingString array?

                if (resultingString[ j ] == lookingFor)

                {

                    notFound = false;

                    break;

                }

            }

            if (notFound)

            {

                // lookingFor was not found at all...

                resultingString[ resultingSize ] = lookingFor;

                resultingSize = resultingSize + 1;

            }

        }

    }

}



// shift the array element over amount number of times

// fill the first amount number of elements with the placeholder value

int shiftRight( string array[ ], int n, int amount, string placeholderToFillEmpties )

{

    int elementsRemaining = -1;

    if (n >= amount && amount >= 0)

    {

         elementsRemaining = n - amount;

         for ( int i = 1; i <= elementsRemaining; i++)

         { 

               // move over the existing data over....

               array[ n - i ] = array[ elementsRemaining - i ];

          }

          // put in the new placeholder values in the front of the array

          for ( int i = 0; i < amount; i++)

          {

               array[ i ] = placeholderToFillEmpties;

          }

    }

    return( elementsRemaining );

}





// verify that each item in the array is less than the one that follows it

bool isInIncreasingOrder( const string array[ ], int n )

{

    bool result( true );

    // with nothing to evaluate, the answer should be false

    if (n < 0)

    {

        result = false;

    }

    for( int i = 1; i < n; i++ )

    {

        if (!(array[i-1] < array[i]))

        {

            // once the condition is not met, we know the answer is false and we can stop looping

            result = false;

            break;

        }

    }

    return( result );

}
