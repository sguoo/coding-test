require 'set'
def solution(number) number.combination(3).count { |c| c.sum == 0 } end