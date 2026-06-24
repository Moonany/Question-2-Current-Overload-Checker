BEGIN
  DECLARE ratedCurrent    AS DOUBLE
  DECLARE measuredCurrent AS DOUBLE

  PRINT "Enter rated current of circuit breaker (A): "
  INPUT ratedCurrent

  PRINT "Enter measured current in circuit (A): "
  INPUT measuredCurrent

  IF measuredCurrent > ratedCurrent THEN
    PRINT "Overload detected. Circuit breaker should trip."
  ELSE
    PRINT "Current is within safe limit."
  END IF

END