func getConcatenation(nums []int) []int {
	var res = make([]int, len(nums) * 2)

	numSize := len(nums)

	for i:=0; i < numSize; i++ {
		res[i] = nums[i]
		res[numSize + i] = nums[i]
	}
	return res 
    
}